<template>
  <div>{{ msg }}</div>
</template>

<script>
export default {
  name: 'foo',
  data() {
    return {
      msg: 'Welcome to foo!'
    }
  }
}
</script>

<style scoped>
h1,
h2 {
  font-weight: normal;
}
ul {
  list-style-type: none;
  padding: 0;
}
li {
  display: inline-block;
  margin: 0 10px;
}
a {
  color: #42b983;
}
</style>
