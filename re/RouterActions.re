module RouterActions = {
  type params;
  external actions : string => params => bool  = "default" [@@bs.module "../../../../src/rnrf/RouterActions"];
}

