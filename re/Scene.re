external scene : ReasonReact.reactClass = "default" [@@bs.module "../../../../src/rnrf/Scene"];

let make name::(name: string) component::(component: ReasonReact.reactClass) title::(title: string) children =>
  ReasonReact.wrapJsForReason
    reactClass::scene props::{"name": name, "component": component, "title": title} children;
