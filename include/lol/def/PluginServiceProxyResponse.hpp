#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PluginServiceProxyResponse { 
    std::string uuid;
    std::string serviceName;
    std::string methodName;
    std::string payload;
    std::string status;
    std::string error; 
  };
  inline void to_json(json& j, const PluginServiceProxyResponse& v) {
    j["uuid"] = v.uuid; 
    j["serviceName"] = v.serviceName; 
    j["methodName"] = v.methodName; 
    j["payload"] = v.payload; 
    j["status"] = v.status; 
    j["error"] = v.error; 
  }
  inline void from_json(const json& j, PluginServiceProxyResponse& v) {
    v.uuid = j.at("uuid").get<std::string>(); 
    v.serviceName = j.at("serviceName").get<std::string>(); 
    v.methodName = j.at("methodName").get<std::string>(); 
    v.payload = j.at("payload").get<std::string>(); 
    v.status = j.at("status").get<std::string>(); 
    v.error = j.at("error").get<std::string>(); 
  }
}