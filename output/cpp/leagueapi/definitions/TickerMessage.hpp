#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/ServiceStatusIncident_Severity.hpp>

namespace leagueapi {
  struct TickerMessage { /**/ 
    std::string updatedAt;/**/
    std::string createdAt;/**/
    std::string message;/**/
    std::string heading;/**/
    ServiceStatusIncident_Severity severity;/**/
  };
  static void to_json(json& j, const TickerMessage& v) { 
    j["updatedAt"] = v.updatedAt;
    j["createdAt"] = v.createdAt;
    j["message"] = v.message;
    j["heading"] = v.heading;
    j["severity"] = v.severity;
  }
  static void from_json(const json& j, TickerMessage& v) { 
    v.updatedAt = j.at("updatedAt").get<std::string>(); 
    v.createdAt = j.at("createdAt").get<std::string>(); 
    v.message = j.at("message").get<std::string>(); 
    v.heading = j.at("heading").get<std::string>(); 
    v.severity = j.at("severity").get<ServiceStatusIncident_Severity>(); 
  }
} 