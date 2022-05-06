var result = window.prompt('検索ワードは？');

if (result=='1216'){
  window.alert('VIPルームへようこそ');
  }
  
else {
  window.alert('入室を拒否されました');
  location.href="https://www.google.co.jp";
  }

<form action="http://google.com/search" method="get">
<input type="text" name="q">
<button type="submit">search</button>
</form>
