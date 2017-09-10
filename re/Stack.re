external stack : ReasonReact.reactClass = "default" [@@bs.module "../../../../src/rnrf/Stack"];

let make name::(name: string) children =>
  ReasonReact.wrapJsForReason
    reactClass::stack
    props::{"name": name}
    children;
