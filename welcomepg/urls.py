from django.urls import path

from . import views

urlpatterns = [
    path("",views.loginpage, name='login'),
    path("events",views.events, name='events'),
    path("home",views.home, name='home'),
    path("actmaster",views.actmaster,name='actmaster'),
    path("createnewuser",views.createnewuser, name='createnewuser'),
    path("newact",views.newact,name='newact'),
    path("logout",views.logoutpage, name='logout'),
    path('userlist',views.userlist,name='userlist'),
    path('subc',views.subc,name='subc'),
    path('aud',views.aud,name='aud'),
    #path("",views.upload,name="upload")
]