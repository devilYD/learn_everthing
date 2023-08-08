import Vue from 'vue'
import Router from 'vue-router'
import foo from '../components/foo'
import bar from '../components/bar'
import HelloWorld from '@/components/HelloWorld'

Vue.use(Router)

export default new Router({
  routes: [
    {
      path: '/',
      name: 'HelloWorld',
      component: HelloWorld
    },
    {
      path: '/',
      component: foo
    },
    {
      path: '/',
      component: bar
    }
  ]
})
