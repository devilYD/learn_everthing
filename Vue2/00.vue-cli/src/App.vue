<template>
  <div id="app">
    <img src="./assets/logo.png" />
    <p>
      <router-link to="/foo">Go to foo</router-link>
      <router-link to="/bar">Go to bar</router-link>
    </p>
    <router-view />
    <div id="demo">
      <p>{{ message }}</p>
      <input type="text" v-model="massage" />
    </div>
  </div>
</template>

<script>
export default {
  name: 'App',
  data() {
    return {
      message: '',
      msg: 'Welcome'
    }
  }
}
</script>

<style>
#app {
  font-family: 'Avenir', Helvetica, Arial, sans-serif;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  text-align: center;
  color: #2c3e50;
  margin-top: 60px;
}
#demo {
  font-family: 'Avenir', Helvetica, Arial, sans-serif;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  text-align: center;
  color: #2c3e50;
  margin-top: 60px;
}
</style>
