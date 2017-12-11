#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct BindingAsyncFailureEvent { /*Represents a failed asynchronous operation.*/ 
    std::string error;/*Error message*/
    uint32_t asyncToken;/*Asynchronous operation token*/
  };
  static void to_json(json& j, const BindingAsyncFailureEvent& v) { 
    j["error"] = v.error;
    j["asyncToken"] = v.asyncToken;
  }
  static void from_json(const json& j, BindingAsyncFailureEvent& v) { 
    v.error = j.at("error").get<std::string>(); 
    v.asyncToken = j.at("asyncToken").get<uint32_t>(); 
  }
} 