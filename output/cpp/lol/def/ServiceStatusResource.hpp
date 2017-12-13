#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/ServiceStatusResource_Status.hpp>
namespace lol {
  struct ServiceStatusResource { 
    ServiceStatusResource_Status status;
    std::string humanReadableUrl; 
  };
  void to_json(json& j, const ServiceStatusResource& v) {
  j["status"] = v.status; 
  j["humanReadableUrl"] = v.humanReadableUrl; 
  }
  void from_json(const json& j, ServiceStatusResource& v) {
  v.status = j.at("status").get<ServiceStatusResource_Status>(); 
  v.humanReadableUrl = j.at("humanReadableUrl").get<std::string>(); 
  }
}