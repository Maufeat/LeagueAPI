#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class ServiceStatusIncident_Severity { /**/ 
    error_e = 2, /**/ 
    info_e = 0, /**/ 
    warn_e = 1, /**/ 
  };
  static void to_json(json& j, const ServiceStatusIncident_Severity& v) {
    switch(v) { 
    case ServiceStatusIncident_Severity::error_e:
      j = "error";
    break;
    case ServiceStatusIncident_Severity::info_e:
      j = "info";
    break;
    case ServiceStatusIncident_Severity::warn_e:
      j = "warn";
    break;
    };
  }
  static void from_json(const json& j, ServiceStatusIncident_Severity& v) {
    auto s = j.get<std::string>(); 
    if(s == "error") {
      v = ServiceStatusIncident_Severity::error_e;
      return;
    } 
    if(s == "info") {
      v = ServiceStatusIncident_Severity::info_e;
      return;
    } 
    if(s == "warn") {
      v = ServiceStatusIncident_Severity::warn_e;
      return;
    } 
  }
} 