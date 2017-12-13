#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/ServiceStatusIncident_Severity.hpp>
namespace lol {
  struct TickerMessage { 
    std::string updatedAt;
    std::string createdAt;
    std::string message;
    std::string heading;
    ServiceStatusIncident_Severity severity; 
  };
  void to_json(json& j, const TickerMessage& v) {
  j["updatedAt"] = v.updatedAt; 
  j["createdAt"] = v.createdAt; 
  j["message"] = v.message; 
  j["heading"] = v.heading; 
  j["severity"] = v.severity; 
  }
  void from_json(const json& j, TickerMessage& v) {
  v.updatedAt = j.at("updatedAt").get<std::string>(); 
  v.createdAt = j.at("createdAt").get<std::string>(); 
  v.message = j.at("message").get<std::string>(); 
  v.heading = j.at("heading").get<std::string>(); 
  v.severity = j.at("severity").get<ServiceStatusIncident_Severity>(); 
  }
}