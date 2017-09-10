# bs-react-native-router-flux
BuckeScript bindings for RNRF

## Demo
```ml
let component = ReasonReact.statelessComponent "Root";

/* Use `name` instead of `key`, `key` is a reserved word here*/
let make _ _children => {
  ...component,
  render: fun _self => {
    <Router>
      <Stack name="root">
        <Scene name="login" title="Login" component=Login.jsComponent />
      </Stack>
    </Router>
  }
};

/* Export it */
let jsComponent = ReasonReact.wrapReasonForJs ::component (fun _props => make () [||]);
```
