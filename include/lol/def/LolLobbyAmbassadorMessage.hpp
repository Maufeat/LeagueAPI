#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyAmbassadorMessage { 
    json payload;
    std::string errorCode;
    int32_t httpStatus;
    std::string message;
    std::string implementationDetails; 
  };
  inline void to_json(json& j, const LolLobbyAmbassadorMessage& v) {
    j["payload"] = v.payload; 
    j["errorCode"] = v.errorCode; 
    j["httpStatus"] = v.httpStatus; 
    j["message"] = v.message; 
    j["implementationDetails"] = v.implementationDetails; 
  }
  inline void from_json(const json& j, LolLobbyAmbassadorMessage& v) {
    v.payload = j.at("payload").get<json>(); 
    v.errorCode = j.at("errorCode").get<std::string>(); 
    v.httpStatus = j.at("httpStatus").get<int32_t>(); 
    v.message = j.at("message").get<std::string>(); 
    v.implementationDetails = j.at("implementationDetails").get<std::string>(); 
  }
}