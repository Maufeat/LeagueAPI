#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChatDebugResource { 
    std::optional<bool> isXMPPLoggingEnabled;
    std::optional<uint32_t> maxReconnectInterval;
    std::optional<bool> failAllChatLogin;
    std::optional<bool> failNextKeepAlive;
    std::optional<bool> triggerChatDisconnect;
    std::optional<uint32_t> asyncWaitInterval;
    std::optional<uint32_t> keepAliveInterval;
    std::optional<bool> failNextChatLogout;
    std::optional<uint32_t> minReconnectInterval;
    std::optional<bool> enableChatFiltering;
    std::optional<bool> silenceChatWhileInGame;
    std::optional<bool> failNextChatLogin; 
  };
  void to_json(json& j, const LolChatDebugResource& v) {
  j["isXMPPLoggingEnabled"] = v.isXMPPLoggingEnabled; 
  j["maxReconnectInterval"] = v.maxReconnectInterval; 
  j["failAllChatLogin"] = v.failAllChatLogin; 
  j["failNextKeepAlive"] = v.failNextKeepAlive; 
  j["triggerChatDisconnect"] = v.triggerChatDisconnect; 
  j["asyncWaitInterval"] = v.asyncWaitInterval; 
  j["keepAliveInterval"] = v.keepAliveInterval; 
  j["failNextChatLogout"] = v.failNextChatLogout; 
  j["minReconnectInterval"] = v.minReconnectInterval; 
  j["enableChatFiltering"] = v.enableChatFiltering; 
  j["silenceChatWhileInGame"] = v.silenceChatWhileInGame; 
  j["failNextChatLogin"] = v.failNextChatLogin; 
  }
  void from_json(const json& j, LolChatDebugResource& v) {
  v.isXMPPLoggingEnabled = j.at("isXMPPLoggingEnabled").get<std::optional<bool>>(); 
  v.maxReconnectInterval = j.at("maxReconnectInterval").get<std::optional<uint32_t>>(); 
  v.failAllChatLogin = j.at("failAllChatLogin").get<std::optional<bool>>(); 
  v.failNextKeepAlive = j.at("failNextKeepAlive").get<std::optional<bool>>(); 
  v.triggerChatDisconnect = j.at("triggerChatDisconnect").get<std::optional<bool>>(); 
  v.asyncWaitInterval = j.at("asyncWaitInterval").get<std::optional<uint32_t>>(); 
  v.keepAliveInterval = j.at("keepAliveInterval").get<std::optional<uint32_t>>(); 
  v.failNextChatLogout = j.at("failNextChatLogout").get<std::optional<bool>>(); 
  v.minReconnectInterval = j.at("minReconnectInterval").get<std::optional<uint32_t>>(); 
  v.enableChatFiltering = j.at("enableChatFiltering").get<std::optional<bool>>(); 
  v.silenceChatWhileInGame = j.at("silenceChatWhileInGame").get<std::optional<bool>>(); 
  v.failNextChatLogin = j.at("failNextChatLogin").get<std::optional<bool>>(); 
  }
}