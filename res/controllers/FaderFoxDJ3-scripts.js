FaderFoxDJ3 = new Controller();

FaderFoxDJ3.init = function (id, debugging) {}
FaderFoxDJ3.shutdown = function () {}

FaderFoxDJ3.gain = function (channel, control, value, status, group) {
    if(value==0x7F) script.triggerControl(group,"gain_down",50);
    if(value==0x01) script.triggerControl(group,"gain_up",50);
}

FaderFoxDJ3.headGain = function (channel, control, value, status, group) {
    if(value==0x7F) script.triggerControl(group,"headGain_down",50);
    if(value==0x01) script.triggerControl(group,"headGain_up",50);
}

FaderFoxDJ3.libraryMove = function (channel, control, value, status, group) {
    if(value==0x7F) script.triggerControl(group,"MoveUp",50);
    if(value==0x01) script.triggerControl(group,"MoveDown",50);
}

FaderFoxDJ3.libraryScroll = function (channel, control, value, status, group) {
    if(value==0x7F) script.triggerControl(group,"ScrollUp",50);
    if(value==0x01) script.triggerControl(group,"ScrollDown",50);
}

FaderFoxDJ3.libraryGo = function (channel, control, value, status, group) {
    if(value==0x7F) script.triggerControl(group,"GoToItem",50);
}

FaderFoxDJ3.beatjump = function (channel, control, value, status, group) {
    if(value==0x7F) script.triggerControl(group,"beatjump_backward",50);
    if(value==0x01) script.triggerControl(group,"beatjump_forward",50);
}

