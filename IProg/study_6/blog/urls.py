from django.urls import path
from . import views

urlpatterns =[
    #FBV 방식
    # path('', views.index),   #서버IP/blog/
    # path('<int:pk>/', views.single_post_page),

    #CBV 방식
    path('', views.PostList.as_view()),
    path('<int:pk>/', views.PostDetail.as_view()),
]