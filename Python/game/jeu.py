#Boss final: Ouverture du paquet de viande de grison .... (claqué au sol)
#perso principal loutre accompagné de son chiot
#quand dcd -> cheniboule
#message "ref entre potes"
#loutre peut aller dans l'eau/ chiot petits passages
#succes/easter eggs
#image de fin boup chiot loutre
#ester egg -> harry otter

import pygame     
import player
import game
import math

clock = pygame.time.Clock()
dt = clock.tick(60)

loutre = player.Player(50)
mur = game.Wall()
maze = game.Maze(game.level1)
wallPositions = maze.getWallPositions()

keyPressed = {}
      
pygame.init()      
pygame.display.set_caption("loutre game")
screen = pygame.display.set_mode((1080, 720))

background = pygame.image.load('assets/bg.jpg')
running = True
print(wallPositions)

while running:
   screen.blit(background, (0,-200))
   screen.blit(loutre.image, loutre.rect)

   loutre.block = (math.floor(loutre.rect.x / 30), math.floor(loutre.rect.y / 30))
   print(loutre.block)

   for i in range(len(wallPositions)):
      screen.blit(mur.image, (wallPositions[i][1], wallPositions[i][0]))
   pygame.display.flip()

   if keyPressed.get(pygame.K_RIGHT) and loutre.rect.x + loutre.rect.width < screen.get_width():
      loutre.move("right", dt)
   elif keyPressed.get(pygame.K_LEFT) and loutre.rect.x > 0:
      loutre.move("left", dt)   
   elif keyPressed.get(pygame.K_UP) and loutre.rect.y > 0:
      loutre.move("up", dt)
   elif keyPressed.get(pygame.K_DOWN) and loutre.rect.y + loutre.rect.height < screen.get_height():
      loutre.move("down", dt)

   for event in pygame.event.get():
      if event.type == pygame.QUIT:
         running = False
         pygame.quit()
      elif event.type == pygame.KEYDOWN:
         keyPressed[event.key] = True
      elif event.type == pygame.KEYUP:
         keyPressed[event.key] = False
