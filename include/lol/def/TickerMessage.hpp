#pragma once
#include "../base_def.hpp" 
#include "ServiceStatusIncident_Severity.hpp"
namespace lol {
  struct TickerMessage { 
    ServiceStatusIncident_Severity severity;
    std::string createdAt;
    std::string updatedAt;
    std::string heading;
    std::string message; 
  };
  inline void to_json(json& j, const TickerMessage& v) {
    j["severity"] = v.severity; 
    j["createdAt"] = v.createdAt; 
    j["updatedAt"] = v.updatedAt; 
    j["heading"] = v.heading; 
    j["message"] = v.message; 
  }
  inline void from_json(const json& j, TickerMessage& v) {
    v.severity = j.at("severity").get<ServiceStatusIncident_Severity>(); 
    v.createdAt = j.at("createdAt").get<std::string>(); 
    v.updatedAt = j.at("updatedAt").get<std::string>(); 
    v.heading = j.at("heading").get<std::string>(); 
    v.message = j.at("message").get<std::string>(); 
  }
}