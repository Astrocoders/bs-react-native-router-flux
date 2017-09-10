external router : ReasonReact.reactClass = "Router" [@@bs.module "react-native-router-flux"];

let make children =>
  ReasonReact.wrapJsForReason reactClass::router props::(Js.Obj.empty()) children;
