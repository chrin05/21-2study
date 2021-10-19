from django.shortcuts import render
from .models import Post
from django.views.generic import ListView,DetailView

# Create your views here.
#FBV 방식
# def index(request):
#     posts = Post.objects.all().order_by('-pk')
#
#     return render(request, 'blog/post_list.html',
#                   {
#                       'posts': posts,
#                   }
#                   )
#
# def single_post_page(request, pk):
#     post = Post.objects.get(pk=pk)
#
#     return render(request, 'blog/post_detail.html',
#                   {
#                       'post': post,
#                   }
#                   )

#CBV 방식 (import도 필수)
class PostList(ListView):
    model = Post
    ordering = '-pk'
#     #선택 1) template_name = 'blog/post_list.html'
#     #선택 2) post_list.html 파일명 post_list.html로 변경
#      +그리고 post_list.html 파일 내에 posts=>post_list로 변경하기
#
class PostDetail(DetailView):
    model = Post
#     #선택 1) template_name = 'blog/post_detail.html'
#     #선택 2) post_list.html 파일명 post_list.html로 변경