#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLoginLcdsServiceProxyResponse { /**/ 
    std::string messageId;/**/
    std::string payload;/**/
    std::string methodName;/**/
    std::string serviceName;/**/
    bool compressedPayload;/**/
    std::string status;/**/
  };
  static void to_json(json& j, const LolLoginLcdsServiceProxyResponse& v) { 
    j["messageId"] = v.messageId;
    j["payload"] = v.payload;
    j["methodName"] = v.methodName;
    j["serviceName"] = v.serviceName;
    j["compressedPayload"] = v.compressedPayload;
    j["status"] = v.status;
  }
  static void from_json(const json& j, LolLoginLcdsServiceProxyResponse& v) { 
    v.messageId = j.at("messageId").get<std::string>(); 
    v.payload = j.at("payload").get<std::string>(); 
    v.methodName = j.at("methodName").get<std::string>(); 
    v.serviceName = j.at("serviceName").get<std::string>(); 
    v.compressedPayload = j.at("compressedPayload").get<bool>(); 
    v.status = j.at("status").get<std::string>(); 
  }
} 