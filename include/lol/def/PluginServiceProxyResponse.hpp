#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PluginServiceProxyResponse { 
    std::string serviceName;
    std::string payload;
    std::string uuid;
    std::string methodName;
    std::string status;
    std::string error; 
  };
  inline void to_json(json& j, const PluginServiceProxyResponse& v) {
    j["serviceName"] = v.serviceName; 
    j["payload"] = v.payload; 
    j["uuid"] = v.uuid; 
    j["methodName"] = v.methodName; 
    j["status"] = v.status; 
    j["error"] = v.error; 
  }
  inline void from_json(const json& j, PluginServiceProxyResponse& v) {
    v.serviceName = j.at("serviceName").get<std::string>(); 
    v.payload = j.at("payload").get<std::string>(); 
    v.uuid = j.at("uuid").get<std::string>(); 
    v.methodName = j.at("methodName").get<std::string>(); 
    v.status = j.at("status").get<std::string>(); 
    v.error = j.at("error").get<std::string>(); 
  }
}