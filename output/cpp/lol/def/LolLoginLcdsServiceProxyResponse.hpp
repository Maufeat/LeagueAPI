#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLoginLcdsServiceProxyResponse { 
    std::string payload;
    std::string status;
    std::string serviceName;
    bool compressedPayload;
    std::string methodName;
    std::string messageId; 
  };
  void to_json(json& j, const LolLoginLcdsServiceProxyResponse& v) {
    j["payload"] = v.payload; 
    j["status"] = v.status; 
    j["serviceName"] = v.serviceName; 
    j["compressedPayload"] = v.compressedPayload; 
    j["methodName"] = v.methodName; 
    j["messageId"] = v.messageId; 
  }
  void from_json(const json& j, LolLoginLcdsServiceProxyResponse& v) {
    v.payload = j.at("payload").get<std::string>(); 
    v.status = j.at("status").get<std::string>(); 
    v.serviceName = j.at("serviceName").get<std::string>(); 
    v.compressedPayload = j.at("compressedPayload").get<bool>(); 
    v.methodName = j.at("methodName").get<std::string>(); 
    v.messageId = j.at("messageId").get<std::string>(); 
  }
}