import pygame     
import math

class Player(pygame.sprite.Sprite):
   def __init__(self, hp):
      super().__init__()
      self.image = pygame.image.load("assets/loutre.png")
      self.image = pygame.transform.scale(self.image, (180, 60))
      self.rect = self.image.get_rect()
      self.block = 0

      self.hp = hp
      self.speed = 0.08

   def move(self, direction, mult):
      if direction == "right":
         self.rect.x += self.speed * mult
      elif direction == "left":
         self.rect.x -= self.speed * mult
      elif direction == "up":
         self.rect.y -= self.speed * mult
      elif direction == "down":
         self.rect.y += self.speed * mult


