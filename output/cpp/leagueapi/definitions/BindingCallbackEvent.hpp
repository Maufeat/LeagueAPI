#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct BindingCallbackEvent { /*Represents the parameters of a call to a provided callback.*/ 
    std::vector<json> parameters;/*Callback parameters*/
    uint32_t id;/*ID of the callback being invoked*/
  };
  static void to_json(json& j, const BindingCallbackEvent& v) { 
    j["parameters"] = v.parameters;
    j["id"] = v.id;
  }
  static void from_json(const json& j, BindingCallbackEvent& v) { 
    v.parameters = j.at("parameters").get<std::vector<json>>(); 
    v.id = j.at("id").get<uint32_t>(); 
  }
} 