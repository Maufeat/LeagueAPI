#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLobbyAmbassadorMessage { /**/ 
    json payload;/**/
    std::string message;/**/
    std::string errorCode;/**/
    std::string implementationDetails;/**/
    int32_t httpStatus;/**/
  };
  static void to_json(json& j, const LolLobbyAmbassadorMessage& v) { 
    j["payload"] = v.payload;
    j["message"] = v.message;
    j["errorCode"] = v.errorCode;
    j["implementationDetails"] = v.implementationDetails;
    j["httpStatus"] = v.httpStatus;
  }
  static void from_json(const json& j, LolLobbyAmbassadorMessage& v) { 
    v.payload = j.at("payload").get<json>(); 
    v.message = j.at("message").get<std::string>(); 
    v.errorCode = j.at("errorCode").get<std::string>(); 
    v.implementationDetails = j.at("implementationDetails").get<std::string>(); 
    v.httpStatus = j.at("httpStatus").get<int32_t>(); 
  }
} 