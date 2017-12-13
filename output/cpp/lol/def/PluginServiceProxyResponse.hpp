#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct PluginServiceProxyResponse { 
    std::string payload;
    std::string methodName;
    std::string error;
    std::string uuid;
    std::string serviceName;
    std::string status; 
  };
  void to_json(json& j, const PluginServiceProxyResponse& v) {
  j["payload"] = v.payload; 
  j["methodName"] = v.methodName; 
  j["error"] = v.error; 
  j["uuid"] = v.uuid; 
  j["serviceName"] = v.serviceName; 
  j["status"] = v.status; 
  }
  void from_json(const json& j, PluginServiceProxyResponse& v) {
  v.payload = j.at("payload").get<std::string>(); 
  v.methodName = j.at("methodName").get<std::string>(); 
  v.error = j.at("error").get<std::string>(); 
  v.uuid = j.at("uuid").get<std::string>(); 
  v.serviceName = j.at("serviceName").get<std::string>(); 
  v.status = j.at("status").get<std::string>(); 
  }
}