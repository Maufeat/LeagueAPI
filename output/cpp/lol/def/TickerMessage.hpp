#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/ServiceStatusIncident_Severity.hpp>
namespace lol {
  struct TickerMessage { 
    std::string message;
    ServiceStatusIncident_Severity severity;
    std::string createdAt;
    std::string heading;
    std::string updatedAt; 
  };
  void to_json(json& j, const TickerMessage& v) {
  j["message"] = v.message; 
  j["severity"] = v.severity; 
  j["createdAt"] = v.createdAt; 
  j["heading"] = v.heading; 
  j["updatedAt"] = v.updatedAt; 
  }
  void from_json(const json& j, TickerMessage& v) {
  v.message = j.at("message").get<std::string>(); 
  v.severity = j.at("severity").get<ServiceStatusIncident_Severity>(); 
  v.createdAt = j.at("createdAt").get<std::string>(); 
  v.heading = j.at("heading").get<std::string>(); 
  v.updatedAt = j.at("updatedAt").get<std::string>(); 
  }
}