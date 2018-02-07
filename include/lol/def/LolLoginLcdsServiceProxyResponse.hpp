#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLoginLcdsServiceProxyResponse { 
    std::string serviceName;
    std::string methodName;
    std::string messageId;
    std::string status;
    std::string payload;
    bool compressedPayload; 
  };
  inline void to_json(json& j, const LolLoginLcdsServiceProxyResponse& v) {
    j["serviceName"] = v.serviceName; 
    j["methodName"] = v.methodName; 
    j["messageId"] = v.messageId; 
    j["status"] = v.status; 
    j["payload"] = v.payload; 
    j["compressedPayload"] = v.compressedPayload; 
  }
  inline void from_json(const json& j, LolLoginLcdsServiceProxyResponse& v) {
    v.serviceName = j.at("serviceName").get<std::string>(); 
    v.methodName = j.at("methodName").get<std::string>(); 
    v.messageId = j.at("messageId").get<std::string>(); 
    v.status = j.at("status").get<std::string>(); 
    v.payload = j.at("payload").get<std::string>(); 
    v.compressedPayload = j.at("compressedPayload").get<bool>(); 
  }
}