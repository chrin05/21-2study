from django.urls import path
from . import views

urlpatterns =[
    #fbv방식
    #path('',views.index),
    #path('<int:pk>/', views.single_post_page),
    #cbv방식
    path('',views.PostList.as_view()),
    path('<int:pk>/', views.PostDetail.as_view()),
]