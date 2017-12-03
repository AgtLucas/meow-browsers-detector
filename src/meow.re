[@bs.val] external userAgent : string = "window.navigator.userAgent";

let windowExists: bool = [%bs.raw {| typeof window !== 'undefined' |}];

Js.log(userAgent);

type browsers =
  | Firefox
  | Safari
  | Chrome
  | Opera
  | IE;

let checkIndexOf = Js.String.indexOf(userAgent);
