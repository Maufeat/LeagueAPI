#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct KickoutMessage { /**/ 
    std::string message;/**/
  };
  static void to_json(json& j, const KickoutMessage& v) { 
    j["message"] = v.message;
  }
  static void from_json(const json& j, KickoutMessage& v) { 
    v.message = j.at("message").get<std::string>(); 
  }
} 