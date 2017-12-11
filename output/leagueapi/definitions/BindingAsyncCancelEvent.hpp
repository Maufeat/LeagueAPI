#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct BindingAsyncCancelEvent { /*Represents a cancelled asynchronous operation.*/ 
    uint32_t asyncToken;/*Asynchronous operation token*/
  };
  static void to_json(json& j, const BindingAsyncCancelEvent& v) { 
    j["asyncToken"] = v.asyncToken;
  }
  static void from_json(const json& j, BindingAsyncCancelEvent& v) { 
    v.asyncToken = j.at("asyncToken").get<uint32_t>(); 
  }
} 