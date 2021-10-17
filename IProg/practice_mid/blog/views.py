from django.shortcuts import render
from .models import Post
#CBV일때
from django.views.generic import ListView,DetailView

# Create your views here.
#fbv방식
#def index(request) :
#    posts = Post.objects.all().order_by('-pk')

#    return render(request, 'blog/post_list.html',
#                  {'posts' : posts},
#                  )

#def single_post_page(request,pk):
#    post = Post.objects.get(pk=pk)

#    return render(request, 'blog/post_detail.html',
#                  {'post' : post},
#                  )

#CBV방식
class PostList(ListView):
    model = Post
    ordering = '-pk'
    # template_name = 'blog/post_list.html'

class PostDetail(DetailView):
        model = Post
        # template_name = 'blog/post_detail.html'