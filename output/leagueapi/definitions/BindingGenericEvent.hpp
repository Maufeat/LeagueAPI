#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct BindingGenericEvent { /*Represents generic data for an event.*/ 
    json data;/*Event data*/
  };
  static void to_json(json& j, const BindingGenericEvent& v) { 
    j["data"] = v.data;
  }
  static void from_json(const json& j, BindingGenericEvent& v) { 
    v.data = j.at("data").get<json>(); 
  }
} 