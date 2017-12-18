#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct PluginServiceProxyResponse { 
    std::string uuid;
    std::string error;
    std::string payload;
    std::string status;
    std::string serviceName;
    std::string methodName; 
  };
  inline void to_json(json& j, const PluginServiceProxyResponse& v) {
    j["uuid"] = v.uuid; 
    j["error"] = v.error; 
    j["payload"] = v.payload; 
    j["status"] = v.status; 
    j["serviceName"] = v.serviceName; 
    j["methodName"] = v.methodName; 
  }
  inline void from_json(const json& j, PluginServiceProxyResponse& v) {
    v.uuid = j.at("uuid").get<std::string>(); 
    v.error = j.at("error").get<std::string>(); 
    v.payload = j.at("payload").get<std::string>(); 
    v.status = j.at("status").get<std::string>(); 
    v.serviceName = j.at("serviceName").get<std::string>(); 
    v.methodName = j.at("methodName").get<std::string>(); 
  }
}