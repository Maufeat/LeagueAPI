#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct BindingGenericAsyncEvent { /*Represents generic data for an asynchronous event.*/ 
    uint32_t asyncToken;/*Asynchronous operation token*/
    json data;/*Event data*/
  };
  static void to_json(json& j, const BindingGenericAsyncEvent& v) { 
    j["asyncToken"] = v.asyncToken;
    j["data"] = v.data;
  }
  static void from_json(const json& j, BindingGenericAsyncEvent& v) { 
    v.asyncToken = j.at("asyncToken").get<uint32_t>(); 
    v.data = j.at("data").get<json>(); 
  }
} 