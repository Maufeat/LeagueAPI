#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct ServiceStatusResource_Status {  
    degraded_e = 3,
    deploying_e = 4,
    offline_e = 2,
    online_e = 1,
    unknown_e = 0,
  };
  inline void to_json(json& j, const ServiceStatusResource_Status& v) {
    if(v == ServiceStatusResource_Status::degraded_e) {
      j = "degraded";
      return;
    }
    if(v == ServiceStatusResource_Status::deploying_e) {
      j = "deploying";
      return;
    }
    if(v == ServiceStatusResource_Status::offline_e) {
      j = "offline";
      return;
    }
    if(v == ServiceStatusResource_Status::online_e) {
      j = "online";
      return;
    }
    if(v == ServiceStatusResource_Status::unknown_e) {
      j = "unknown";
      return;
    }
  }
  inline void from_json(const json& j, ServiceStatusResource_Status& v) {
    if(j.get<std::string>() == "degraded") {
      v = ServiceStatusResource_Status::degraded_e;
      return;
    } 
    if(j.get<std::string>() == "deploying") {
      v = ServiceStatusResource_Status::deploying_e;
      return;
    } 
    if(j.get<std::string>() == "offline") {
      v = ServiceStatusResource_Status::offline_e;
      return;
    } 
    if(j.get<std::string>() == "online") {
      v = ServiceStatusResource_Status::online_e;
      return;
    } 
    if(j.get<std::string>() == "unknown") {
      v = ServiceStatusResource_Status::unknown_e;
      return;
    } 
  }
}