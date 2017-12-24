#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChatDebugResource { 
    std::optional<bool> enableChatFiltering;
    std::optional<bool> isXMPPLoggingEnabled;
    std::optional<uint32_t> maxReconnectInterval;
    std::optional<bool> failNextChatLogin;
    std::optional<bool> triggerChatDisconnect;
    std::optional<uint32_t> asyncWaitInterval;
    std::optional<uint32_t> minReconnectInterval;
    std::optional<bool> silenceChatWhileInGame;
    std::optional<uint32_t> keepAliveInterval;
    std::optional<bool> failNextChatLogout;
    std::optional<bool> failNextKeepAlive;
    std::optional<bool> failAllChatLogin; 
  };
  inline void to_json(json& j, const LolChatDebugResource& v) {
    if(v.enableChatFiltering)
      j["enableChatFiltering"] = *v.enableChatFiltering;
    if(v.isXMPPLoggingEnabled)
      j["isXMPPLoggingEnabled"] = *v.isXMPPLoggingEnabled;
    if(v.maxReconnectInterval)
      j["maxReconnectInterval"] = *v.maxReconnectInterval;
    if(v.failNextChatLogin)
      j["failNextChatLogin"] = *v.failNextChatLogin;
    if(v.triggerChatDisconnect)
      j["triggerChatDisconnect"] = *v.triggerChatDisconnect;
    if(v.asyncWaitInterval)
      j["asyncWaitInterval"] = *v.asyncWaitInterval;
    if(v.minReconnectInterval)
      j["minReconnectInterval"] = *v.minReconnectInterval;
    if(v.silenceChatWhileInGame)
      j["silenceChatWhileInGame"] = *v.silenceChatWhileInGame;
    if(v.keepAliveInterval)
      j["keepAliveInterval"] = *v.keepAliveInterval;
    if(v.failNextChatLogout)
      j["failNextChatLogout"] = *v.failNextChatLogout;
    if(v.failNextKeepAlive)
      j["failNextKeepAlive"] = *v.failNextKeepAlive;
    if(v.failAllChatLogin)
      j["failAllChatLogin"] = *v.failAllChatLogin;
  }
  inline void from_json(const json& j, LolChatDebugResource& v) {
    if(auto it = j.find("enableChatFiltering"); it != j.end() && !it->is_null())
      v.enableChatFiltering = it->get<std::optional<bool>>(); 
    if(auto it = j.find("isXMPPLoggingEnabled"); it != j.end() && !it->is_null())
      v.isXMPPLoggingEnabled = it->get<std::optional<bool>>(); 
    if(auto it = j.find("maxReconnectInterval"); it != j.end() && !it->is_null())
      v.maxReconnectInterval = it->get<std::optional<uint32_t>>(); 
    if(auto it = j.find("failNextChatLogin"); it != j.end() && !it->is_null())
      v.failNextChatLogin = it->get<std::optional<bool>>(); 
    if(auto it = j.find("triggerChatDisconnect"); it != j.end() && !it->is_null())
      v.triggerChatDisconnect = it->get<std::optional<bool>>(); 
    if(auto it = j.find("asyncWaitInterval"); it != j.end() && !it->is_null())
      v.asyncWaitInterval = it->get<std::optional<uint32_t>>(); 
    if(auto it = j.find("minReconnectInterval"); it != j.end() && !it->is_null())
      v.minReconnectInterval = it->get<std::optional<uint32_t>>(); 
    if(auto it = j.find("silenceChatWhileInGame"); it != j.end() && !it->is_null())
      v.silenceChatWhileInGame = it->get<std::optional<bool>>(); 
    if(auto it = j.find("keepAliveInterval"); it != j.end() && !it->is_null())
      v.keepAliveInterval = it->get<std::optional<uint32_t>>(); 
    if(auto it = j.find("failNextChatLogout"); it != j.end() && !it->is_null())
      v.failNextChatLogout = it->get<std::optional<bool>>(); 
    if(auto it = j.find("failNextKeepAlive"); it != j.end() && !it->is_null())
      v.failNextKeepAlive = it->get<std::optional<bool>>(); 
    if(auto it = j.find("failAllChatLogin"); it != j.end() && !it->is_null())
      v.failAllChatLogin = it->get<std::optional<bool>>(); 
  }
}