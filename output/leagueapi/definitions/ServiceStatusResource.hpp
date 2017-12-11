#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/ServiceStatusResource_Status.hpp>"

namespace leagueapi {
  struct ServiceStatusResource { /**/ 
    ServiceStatusResource_Status status;/**/
    std::string humanReadableUrl;/**/
  };
  static void to_json(json& j, const ServiceStatusResource& v) { 
    j["status"] = v.status;
    j["humanReadableUrl"] = v.humanReadableUrl;
  }
  static void from_json(const json& j, ServiceStatusResource& v) { 
    v.status = j.at("status").get<ServiceStatusResource_Status>(); 
    v.humanReadableUrl = j.at("humanReadableUrl").get<std::string>(); 
  }
} 