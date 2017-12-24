#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLoginLcdsServiceProxyResponse { 
    std::string serviceName;
    std::string payload;
    std::string messageId;
    bool compressedPayload;
    std::string methodName;
    std::string status; 
  };
  inline void to_json(json& j, const LolLoginLcdsServiceProxyResponse& v) {
    j["serviceName"] = v.serviceName; 
    j["payload"] = v.payload; 
    j["messageId"] = v.messageId; 
    j["compressedPayload"] = v.compressedPayload; 
    j["methodName"] = v.methodName; 
    j["status"] = v.status; 
  }
  inline void from_json(const json& j, LolLoginLcdsServiceProxyResponse& v) {
    v.serviceName = j.at("serviceName").get<std::string>(); 
    v.payload = j.at("payload").get<std::string>(); 
    v.messageId = j.at("messageId").get<std::string>(); 
    v.compressedPayload = j.at("compressedPayload").get<bool>(); 
    v.methodName = j.at("methodName").get<std::string>(); 
    v.status = j.at("status").get<std::string>(); 
  }
}