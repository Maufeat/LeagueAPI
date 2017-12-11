#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class ServiceStatusResource_Status { /**/ 
    degraded_e = 3, /**/ 
    deploying_e = 4, /**/ 
    offline_e = 2, /**/ 
    online_e = 1, /**/ 
    unknown_e = 0, /**/ 
  };
  static void to_json(json& j, const ServiceStatusResource_Status& v) {
    switch(v) { 
    case ServiceStatusResource_Status::degraded_e:
      j = "degraded";
    break;
    case ServiceStatusResource_Status::deploying_e:
      j = "deploying";
    break;
    case ServiceStatusResource_Status::offline_e:
      j = "offline";
    break;
    case ServiceStatusResource_Status::online_e:
      j = "online";
    break;
    case ServiceStatusResource_Status::unknown_e:
      j = "unknown";
    break;
    };
  }
  static void from_json(const json& j, ServiceStatusResource_Status& v) {
    auto s = j.get<std::string>(); 
    if(s == "degraded") {
      v = ServiceStatusResource_Status::degraded_e;
      return;
    } 
    if(s == "deploying") {
      v = ServiceStatusResource_Status::deploying_e;
      return;
    } 
    if(s == "offline") {
      v = ServiceStatusResource_Status::offline_e;
      return;
    } 
    if(s == "online") {
      v = ServiceStatusResource_Status::online_e;
      return;
    } 
    if(s == "unknown") {
      v = ServiceStatusResource_Status::unknown_e;
      return;
    } 
  }
} 