#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyAmbassadorMessage { 
    int32_t httpStatus;
    std::string errorCode;
    std::string message;
    std::string implementationDetails;
    json payload; 
  };
  inline void to_json(json& j, const LolLobbyAmbassadorMessage& v) {
    j["httpStatus"] = v.httpStatus; 
    j["errorCode"] = v.errorCode; 
    j["message"] = v.message; 
    j["implementationDetails"] = v.implementationDetails; 
    j["payload"] = v.payload; 
  }
  inline void from_json(const json& j, LolLobbyAmbassadorMessage& v) {
    v.httpStatus = j.at("httpStatus").get<int32_t>(); 
    v.errorCode = j.at("errorCode").get<std::string>(); 
    v.message = j.at("message").get<std::string>(); 
    v.implementationDetails = j.at("implementationDetails").get<std::string>(); 
    v.payload = j.at("payload").get<json>(); 
  }
}