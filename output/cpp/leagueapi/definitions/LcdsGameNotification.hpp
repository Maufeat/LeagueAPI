#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LcdsGameNotification { /**/ 
    std::string type;/**/
    std::string messageCode;/**/
    std::string messageArgument;/**/
  };
  static void to_json(json& j, const LcdsGameNotification& v) { 
    j["type"] = v.type;
    j["messageCode"] = v.messageCode;
    j["messageArgument"] = v.messageArgument;
  }
  static void from_json(const json& j, LcdsGameNotification& v) { 
    v.type = j.at("type").get<std::string>(); 
    v.messageCode = j.at("messageCode").get<std::string>(); 
    v.messageArgument = j.at("messageArgument").get<std::string>(); 
  }
} 