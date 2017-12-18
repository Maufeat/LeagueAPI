#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct ServiceStatusIncident_Severity {  
    error_e = 2,
    info_e = 0,
    warn_e = 1,
  };
  inline void to_json(json& j, const ServiceStatusIncident_Severity& v) {
    if(v == ServiceStatusIncident_Severity::error_e) {
      j = "error";
      return;
    }
    if(v == ServiceStatusIncident_Severity::info_e) {
      j = "info";
      return;
    }
    if(v == ServiceStatusIncident_Severity::warn_e) {
      j = "warn";
      return;
    }
  }
  inline void from_json(const json& j, ServiceStatusIncident_Severity& v) {
    if(j.get<std::string>() == "error") {
      v = ServiceStatusIncident_Severity::error_e;
      return;
    } 
    if(j.get<std::string>() == "info") {
      v = ServiceStatusIncident_Severity::info_e;
      return;
    } 
    if(j.get<std::string>() == "warn") {
      v = ServiceStatusIncident_Severity::warn_e;
      return;
    } 
  }
}