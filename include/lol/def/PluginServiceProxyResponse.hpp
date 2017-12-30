#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PluginServiceProxyResponse { 
    std::string methodName;
    std::string status;
    std::string error;
    std::string serviceName;
    std::string uuid;
    std::string payload; 
  };
  inline void to_json(json& j, const PluginServiceProxyResponse& v) {
    j["methodName"] = v.methodName; 
    j["status"] = v.status; 
    j["error"] = v.error; 
    j["serviceName"] = v.serviceName; 
    j["uuid"] = v.uuid; 
    j["payload"] = v.payload; 
  }
  inline void from_json(const json& j, PluginServiceProxyResponse& v) {
    v.methodName = j.at("methodName").get<std::string>(); 
    v.status = j.at("status").get<std::string>(); 
    v.error = j.at("error").get<std::string>(); 
    v.serviceName = j.at("serviceName").get<std::string>(); 
    v.uuid = j.at("uuid").get<std::string>(); 
    v.payload = j.at("payload").get<std::string>(); 
  }
}