#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLoginLcdsServiceProxyResponse { 
    std::string methodName;
    std::string status;
    std::string serviceName;
    std::string messageId;
    bool compressedPayload;
    std::string payload; 
  };
  inline void to_json(json& j, const LolLoginLcdsServiceProxyResponse& v) {
    j["methodName"] = v.methodName; 
    j["status"] = v.status; 
    j["serviceName"] = v.serviceName; 
    j["messageId"] = v.messageId; 
    j["compressedPayload"] = v.compressedPayload; 
    j["payload"] = v.payload; 
  }
  inline void from_json(const json& j, LolLoginLcdsServiceProxyResponse& v) {
    v.methodName = j.at("methodName").get<std::string>(); 
    v.status = j.at("status").get<std::string>(); 
    v.serviceName = j.at("serviceName").get<std::string>(); 
    v.messageId = j.at("messageId").get<std::string>(); 
    v.compressedPayload = j.at("compressedPayload").get<bool>(); 
    v.payload = j.at("payload").get<std::string>(); 
  }
}