#pragma once
#include "../base_def.hpp" 
#include "ServiceStatusResource_Status.hpp"
namespace lol {
  struct ServiceStatusResource { 
    std::string humanReadableUrl;
    ServiceStatusResource_Status status; 
  };
  inline void to_json(json& j, const ServiceStatusResource& v) {
    j["humanReadableUrl"] = v.humanReadableUrl; 
    j["status"] = v.status; 
  }
  inline void from_json(const json& j, ServiceStatusResource& v) {
    v.humanReadableUrl = j.at("humanReadableUrl").get<std::string>(); 
    v.status = j.at("status").get<ServiceStatusResource_Status>(); 
  }
}