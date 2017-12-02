[@bs.val] external userAgentIndexOf : string => string = "window.navigator.userAgent.indexOf";
let windowExists: bool = [%bs.raw {| typeof window !== 'undefined' |}];

Js.log(userAgentIndexOf("Firefox"));

let agent = (key) => {
  userAgentIndexOf(key);
};
