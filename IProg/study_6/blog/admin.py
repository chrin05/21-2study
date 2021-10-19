from django.contrib import admin
from .models import Post #Post import 필수

# Register your models here.
admin.site.register(Post)  #post모델 등록하기