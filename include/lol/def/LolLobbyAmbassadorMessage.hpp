#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyAmbassadorMessage { 
    int32_t httpStatus;
    std::string implementationDetails;
    std::string errorCode;
    json payload;
    std::string message; 
  };
  inline void to_json(json& j, const LolLobbyAmbassadorMessage& v) {
    j["httpStatus"] = v.httpStatus; 
    j["implementationDetails"] = v.implementationDetails; 
    j["errorCode"] = v.errorCode; 
    j["payload"] = v.payload; 
    j["message"] = v.message; 
  }
  inline void from_json(const json& j, LolLobbyAmbassadorMessage& v) {
    v.httpStatus = j.at("httpStatus").get<int32_t>(); 
    v.implementationDetails = j.at("implementationDetails").get<std::string>(); 
    v.errorCode = j.at("errorCode").get<std::string>(); 
    v.payload = j.at("payload").get<json>(); 
    v.message = j.at("message").get<std::string>(); 
  }
}